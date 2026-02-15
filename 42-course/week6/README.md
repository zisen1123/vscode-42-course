# Week 6

Time: 9-11h

Goals:
- Use dynamic memory and linked lists safely.
- Eliminate leaks and invalid frees.

Tasks:
- Convert record storage from array to linked list.
- Support insertion, deletion, and full cleanup.
- Run `valgrind` and fix reported issues.

Acceptance:
- Head/middle/tail deletion all work.
- `valgrind` reports 0 definitely lost blocks.
- Error handling exists for allocation failures.

Sync tag: 2026-02-15-course-sync

<!-- KNOWLEDGE_MAP_START -->
## Knowledge Mapping
- C Primer Plus: Ch.14 (+ dynamic memory review)
- Focus: malloc/free discipline, linked-list safety checks
<!-- KNOWLEDGE_MAP_END -->
