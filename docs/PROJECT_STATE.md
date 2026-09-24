# Project State

## Current Phase
Phase 0 — Project Setup & Architecture

## Current Status
Project-tracking documentation initialized. Workspace inspected and baseline savepoint established. No application source code, UI components, or dependencies have been installed yet.

## Completed
- Initial workspace inspection completed.
- Initial baseline Git savepoint created (`checkpoint: initial-project-state`).
- Project documentation and tracking system created (`docs/`).

## Currently Working On
Initializing project-tracking documentation and establishing project baseline.

## Next Step
Discuss workspace directory isolation/structuring and evaluate frontend tech stack (Next.js + TypeScript + Tailwind CSS) before creating project directories or installing packages.

## Last Completed Checkpoint
`checkpoint: initial-project-state` (Commit: `38d41586e9a3c3522b5284f589e5c6ea6a969a67`)

## Important Decisions
- Project documentation system established in `docs/` (`PROJECT_STATE.md`, `ROADMAP.md`, `ARCHITECTURE.md`, `DECISIONS.md`, `CHANGELOG.md`).
- Planned stack: Next.js + TypeScript + Tailwind CSS (Frontend), Express.js + TypeScript (Backend), Firebase Auth / Firestore / Storage (Tentative).
- Customer authentication will support Google OAuth, Email + Password, and Phone Number + OTP (GitHub OAuth is explicitly excluded for customer auth).

## Current Blockers
None.

## Important Rules
- Major technical decisions must be discussed before implementation.
- Alternatives should be considered before selecting a technology.
- Create a Git savepoint before major implementation phases.
- Make small, isolated changes.
- Do not modify unrelated working features.
- Test changes before moving to the next phase.
- Keep documentation synchronized with the actual project state.
- Never commit secrets or credentials.
- Do not push to GitHub unless explicitly instructed.
