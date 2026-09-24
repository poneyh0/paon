# README

## Description 📖

tool-template is a repository containing a couple of dev tools already set
for my code development needs.
It has vocation to evolve especially if I learn a new programming language.

## How to use 🔄

- Start by installing pre-commit with `pip3 install pre-commit` Adjust depending
  on your system.
  You might have to force the installation system-wide on Linux.
- Checkout this repository.
- From here, you don't need the repository anymore for your project
- Remove the files that you don't need
- Adjust the rules as you want for each language you use
- Install the git hooks:
  `pre-commit install && pre-commit install --hook-type commit-msg` (the second
  command is required for the `commitizen` hook, which runs at the `commit-msg`
  stage to check your commit messages)
- To remove the repository: `git remote remove origin`
- Checkout your repository or start your project.

## Prerequisites 📦

Some hooks need their language runtime installed locally to run:

- **Markdown / Yaml / Git hooks**: none, `pre-commit` manages them.
- **C++ (`clang-format`)**: none extra, the hook ships its own binary.
- **C++ (`cppcheck`)**: a local install of cppcheck
  (e.g. `brew install cppcheck` or `apt install cppcheck`).
- **CMake (`gersemi`)**: none, `pre-commit` manages it.
- **Js, Ts, Json, Html, Css (`biome`)**: Node.js (pulled automatically by
  `pre-commit` via `additional_dependencies`).
- **Python (`ruff`, `ty`)**: none extra, the hooks ship their own binary.
- **Rust (`cargo-fmt`, `cargo-clippy`)**: a local Rust toolchain (`cargo`)
  already installed.

## License 🔑

MIT License Copyright (c) 2026 Sebastien Paoli See file LICENSE
for more information about the license.

## Available Tools 🛠️

The tools are called thanks to pre-commit and their integrations.
So, you should look at `.pre-commit-config.yaml` file to see
and adapt the tools called and remove tools that are not useful to you.

| Repo | Hook Name | Description |
| --- | --- | --- |
| pre-commit/pre-commit-hooks | trailing-whitespace | Trim trailing whitespace |
| pre-commit/pre-commit-hooks | end-of-file-fixer | Files end in a newline |
| pre-commit/pre-commit-hooks | check-yaml | Check yaml |
| pre-commit/pre-commit-hooks | check-json | Check json |
| pre-commit/pre-commit-hooks | check-toml | Check toml |
| pre-commit/pre-commit-hooks | check-case-conflict | Check name for case insensitive OS |
| pre-commit/pre-commit-hooks | check-illegal-windows-names | Check illegal windows names |
| pre-commit/pre-commit-hooks | check-added-large-files | Block large file commits |
| pre-commit/pre-commit-hooks | check-merge-conflict | Detect conflict markers |
| pre-commit/pre-commit-hooks | detect-private-key | Detect private keys |
| commitizen-tools/commitizen | commitizen | Ensure commit follows Conventional Commits |
| gitleaks/gitleaks | gitleaks | Detect hardcoded secrets |
| rvben/rumdl-pre-commit | rumdl-fmt | Format markdown, fail if issues remain |
| adrienverge/yamllint | yamllint | Lint Yaml file |
| google/yamlfmt | yamlfmt | Format Yaml file |
| pre-commit/mirrors-clang-format | clang-format | Format C++ file |
| local (system cppcheck) | cppcheck | Static analysis of C/C++ files |
| BlankSpruce/gersemi | gersemi | Format CMake files |
| biomejs/pre-commit | biome-check | Format, organize imports, lint and apply safe fixes for Js, Ts, Json, Html, Css |
| astral-sh/ty-pre-commit | ty | Typecheck Python file |
| astral-sh/ruff-pre-commit | ruff, ruff-format | Lint and format Python file |
| local (system cargo) | cargo-fmt, cargo-clippy | Format and lint Rust file |
| crate-ci/typos | typos | Look for spelling mistakes |
| ComPWA/taplo-pre-commit | taplo-format | Format Toml file |

### Not run by pre-commit

- **`.clang-tidy`**: C++ static analysis configuration,
  read directly by clangd-based IDEs
  (VS Code, CLion, Neovim...) for inline diagnostics, and usable in CI.
  It needs a compilation database:
  set `CMAKE_EXPORT_COMPILE_COMMANDS=ON` in your CMake project.
