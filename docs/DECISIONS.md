# Architecture & Technical Decisions

This log records technical decisions to maintain project alignment and document design choices.

---

## Decision: Frontend Framework (Next.js)

**Status:** CONFIRMED  
**Problem:** Need a robust React framework capable of server rendering, fast page loads, SEO optimization, and structured routing for an e-commerce platform.  
**Options:** Next.js, Plain React (Vite / CRA), Remix.  
**Chosen Option:** Next.js  
**Why:** Next.js provides built-in SSR/SSG essential for e-commerce SEO, optimized image handling, and standard ecosystem support.  
**Advantages:** Excellent SEO, native image/font optimizations, active ecosystem, rich developer tooling.  
**Disadvantages:** Framework conventions and server/client boundary complexity.  
**Trade-offs:** Higher initial architectural discipline compared to client-only SPAs.  
**Date:** 2026-09-24  

---

## Decision: Primary Language (TypeScript)

**Status:** CONFIRMED  
**Problem:** Ensure end-to-end type safety, reduce runtime errors, and streamline data contracts across frontend and backend.  
**Options:** TypeScript, JavaScript.  
**Chosen Option:** TypeScript  
**Why:** Strong typing improves reliability, refactoring safety, and code readability across large applications.  
**Advantages:** Compile-time error catching, superior IDE autocompletion, self-documenting data interfaces.  
**Disadvantages:** Extra setup and type declaration overhead.  
**Trade-offs:** Initial development speed trade-off for long-term maintainability.  
**Date:** 2026-09-24  

---

## Decision: Backend Framework (Express.js)

**Status:** CONFIRMED  
**Problem:** Dedicated backend service required for custom business logic, server-side validations, and secure operational APIs.  
**Options:** Express.js, Fastify, Next.js API Routes only, NestJS.  
**Chosen Option:** Express.js  
**Why:** Established, flexible, and lightweight Node.js standard for building RESTful microservices and custom APIs.  
**Advantages:** Vast middleware ecosystem, unopinionated, widespread familiarity.  
**Disadvantages:** Requires manual boilerplate structure for routes, validation, and architecture.  
**Trade-offs:** Flexibility requires disciplined project structure compared to opinionated frameworks.  
**Date:** 2026-09-24  

---

## Decision: Authentication Platform (Firebase Authentication)

**Status:** CONFIRMED  
**Problem:** Implement secure customer authentication across multiple providers without building custom auth infrastructure from scratch.  
**Options:** Firebase Authentication, Auth0, Supabase Auth, Custom JWT/Session server.  
**Chosen Option:** Firebase Authentication  
**Why:** Native out-of-the-box support for Google OAuth, Email/Password, and Phone OTP with managed token verification.  
**Advantages:** Managed security, built-in rate limiting/SMS verification, easy SDK integration.  
**Disadvantages:** Vendor coupling to Google Cloud/Firebase ecosystem.  
**Trade-offs:** Relies on third-party identity management rather than self-hosted database credentials.  
**Date:** 2026-09-24  

---

## Decision: Customer Authentication Providers (Google OAuth, Email/Password, Phone OTP)

**Status:** CONFIRMED  
**Problem:** Provide frictionless customer sign-in options standard in consumer e-commerce.  
**Options:** Google OAuth, Email + Password, Phone + OTP, GitHub OAuth, Socials.  
**Chosen Option:** Google OAuth, Email + Password, and Phone Number + OTP.  
**Why:** Covers the majority of consumer e-commerce customer preferences across web and mobile.  
**Advantages:** Low friction for customers, mobile verification via OTP, familiar login paths.  
**Disadvantages:** Phone OTP requires SMS quota/cost management.  
**Trade-offs:** Multiple auth methods increase client UI/state handling complexity.  
**Date:** 2026-09-24  

---

## Decision: Exclusion of GitHub OAuth for Customer Authentication

**Status:** CONFIRMED  
**Problem:** Determine whether developer-oriented social logins (e.g., GitHub) should be offered to retail clothing customers.  
**Options:** Include GitHub OAuth, Exclude GitHub OAuth.  
**Chosen Option:** Exclude GitHub OAuth from customer-facing authentication.  
**Why:** The target audience for a clothing e-commerce website is general consumers, where developer platforms like GitHub are irrelevant and add visual clutter.  
**Advantages:** Clean, consumer-appropriate login UI.  
**Disadvantages:** None for retail consumers.  
**Trade-offs:** None.  
**Date:** 2026-09-24  

---

## Decision: Primary Database Selection

**Status:** TENTATIVE  
**Problem:** Select a scalable database solution for product catalogue, orders, and user profile data.  
**Options:** Firestore (Firebase), PostgreSQL, MongoDB.  
**Chosen Option:** Firestore (Tentative)  
**Why:** Tight integration with Firebase ecosystem and real-time capabilities; formal technical evaluation pending before implementation.  
**Advantages:** Managed infrastructure, fast document queries, seamless rules.  
**Disadvantages:** Complex relational queries, transactional constraints.  
**Trade-offs:** Document data model vs. relational consistency for inventory/transactions.  
**Date:** 2026-09-24  

---

## Decision: Media Storage Engine

**Status:** TENTATIVE  
**Problem:** Secure cloud storage for high-resolution product images, lookbooks, and banner media.  
**Options:** Firebase Storage, AWS S3, Cloudinary.  
**Chosen Option:** Firebase Storage (Tentative)  
**Why:** Cohesive with Firebase Auth and Firestore rules; formal evaluation pending before implementation.  
**Advantages:** Direct client/server upload capabilities, managed CDN integration.  
**Disadvantages:** Image transformation features may require additional services.  
**Trade-offs:** Convenience of unified ecosystem vs. specialized e-commerce media processing pipelines.  
**Date:** 2026-09-24  

---

## Decision: Payment Gateway Integration

**Status:** NOT DECIDED  
**Problem:** Secure payment gateway provider for processing transactions (cards, UPI, netbanking).  
**Options:** Razorpay, Stripe, Cashfree, PayU.  
**Chosen Option:** Not decided yet (Razorpay under evaluation for Indian market).  
**Why:** Evaluation of regional compliance, settlement fees, UPI support, and checkout UX pending.  
**Advantages:** TBD upon evaluation.  
**Disadvantages:** TBD upon evaluation.  
**Trade-offs:** TBD upon evaluation.  
**Date:** 2026-09-24  
