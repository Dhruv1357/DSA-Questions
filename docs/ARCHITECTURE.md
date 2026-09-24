# Architecture Overview

This document outlines the proposed architectural structure for the clothing e-commerce website.

> [!NOTE]
> All items listed below represent the **proposed** technical architecture and have not yet been implemented in the codebase. Each technology and integration will be formally evaluated before implementation.

---

## 1. Stack Status Overview

| Component | Technology / Tool | Status |
| :--- | :--- | :--- |
| **Frontend Framework** | Next.js | **CONFIRMED** |
| **Language (Frontend & Backend)** | TypeScript | **CONFIRMED** |
| **Styling** | Tailwind CSS | **CONFIRMED** |
| **Backend Framework** | Express.js | **CONFIRMED** |
| **Authentication Engine** | Firebase Authentication | **CONFIRMED** |
| **Auth Methods: Google OAuth** | Firebase Auth Provider | **CONFIRMED** |
| **Auth Methods: Email + Password** | Firebase Auth Provider | **CONFIRMED** |
| **Auth Methods: Phone Number + OTP** | Firebase Auth Provider | **CONFIRMED** |
| **Database** | Firestore | **TENTATIVE** |
| **File Storage** | Firebase Storage | **TENTATIVE** |
| **Frontend State Management** | React State / Context API | **TENTATIVE** |
| **Payment Gateway** | Razorpay (or alternatives) | **NOT DECIDED** |

---

## 2. Component Responsibilities

### Next.js (Frontend)
- **User Interface**: Render responsive, modern e-commerce storefront pages.
- **Routing**: Application routing (App Router / Pages).
- **SEO & Performance**: Server-Side Rendering (SSR) / Static Site Generation (SSG) for product and catalogue pages to maximize search visibility and Core Web Vitals.
- **Client State**: Managing local UI state, cart interactions, and auth session state.

### Express.js (Backend)
- **REST API**: Expose structured endpoints for products, orders, cart calculations, and checkout.
- **Business Logic**: Centralize pricing rules, discount validation, tax computation, and order placement.
- **Server-Side Validation**: Validate all incoming payload schemas securely.
- **Security & Authorization**: Verify Firebase ID tokens and enforce customer/admin role permissions.

### Firebase
- **Authentication**: Manage identity lifecycle, sessions, and token issuance for Google, Email/Password, and Phone OTP auth.
- **Firestore (Tentative)**: Document database for storing product catalogue data, customer profiles, and order records.
- **Storage (Tentative)**: Secure cloud object storage for product photography, lookbooks, and user-uploaded media.

---

## 3. High-Level Communication Flow

```
[Browser / Customer]
        │
        ├── (UI / SSR / Static Pages) ───────> [Next.js Frontend]
        │                                             │
        ├── (Direct Auth / OAuth / OTP) ──────> [Firebase Auth]
        │                                             │ (Firebase ID Token)
        └── (API Requests / Order Checkout) ──> [Express.js Backend]
                                                      │
                                                      ├──> [Firebase Admin / Firestore] (Tentative)
                                                      └──> [Payment Gateway API] (Not Decided)
```
