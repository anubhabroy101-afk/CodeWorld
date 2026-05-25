# Development Environment Setup Guide

## Overview

This workspace has been configured with a complete Python development environment including:

- Python virtual environment (`.venv`)
- VS Code workspace configuration
- Development tools and dependencies
- Linting and formatting configurations
- Debugging capabilities for Python and C/C++

## Project Structure

```text
CODES/
├── .vscode/                 # VS Code settings and configurations
│   ├── settings.json       # Workspace settings
│   ├── launch.json         # Debug configurations
│   ├── tasks.json          # Build and run tasks
│   └── extensions.json     # Recommended extensions
├── .venv/                  # Python virtual environment
├── Python/                 # Python projects and examples
├── C-C--/                  # C/C++ projects
├── HTML/                   # HTML/CSS projects
├── requirements.txt        # Python dependencies
├── pyproject.toml         # Python project configuration
├── .pylintrc              # Pylint configuration
├── .editorconfig          # Editor configuration
├── .gitignore             # Git ignore rules
└── CODES.code-workspace   # VS Code workspace file
```

## Quick Start

### 1. Open the Workspace

```powershell
# Open the workspace in VS Code
code CODES.code-workspace
```

### 2. Virtual Environment

The virtual environment is already created at `.venv/`. It's automatically selected as the default Python interpreter.

### 3. Install/Update Dependencies

```powershell
.\.venv\Scripts\pip install -r requirements.txt
```

### 4. Run Python Files

Use the VS Code task: **Ctrl+Shift+B** or through Tasks menu:

- `Python: Run Current File` - Executes the active Python file
- `Python: Run Tests` - Runs all unit tests
- `Python: Format with Black` - Formats Python code
- `Python: Lint with Pylint` - Checks code quality

### 5. Debug Python

- Set breakpoints in your code (click on line number)
- Press **F5** or use Debug menu to start debugging
- Available debug configurations:
  - Python: Current File
  - Python: Module
  - Python: Attach using Process ID

## Installed Tools

### Core Development

- **black** - Code formatter
- **pylint** - Code linter
- **flake8** - Style checker
- **mypy** - Type checker
- **pytest** - Testing framework
- **autopep8** - Alternative formatter

### Utilities

- **numpy** - Numerical computing
- **pandas** - Data manipulation
- **ipython** - Enhanced Python shell
- **jupyter** - Notebook environment

## Key Features

### 1. Formatting

- Automatic formatting on save (Black)
- Line length set to 88 characters
- Consistent indentation (4 spaces for Python)

### 2. Linting

- Pylint with customizable rules
- Configured in `.pylintrc`
- Reports code quality issues

### 3. Type Checking

- Mypy for static type analysis
- Basic type checking mode enabled

### 4. Testing

- Pytest configuration in `pyproject.toml`
- Unittest discovery in Python folder
- Test patterns: `*_test.py` and `test_*.py`

### 5. Code Organization

- EditorConfig for consistent formatting across editors
- Python analysis includes multiple paths for imports

## VS Code Extensions

### Recommended Extensions

- **Python** - Core Python support
- **Pylance** - Advanced type checking and IntelliSense
- **Black Formatter** - Code formatting
- **Ruff** - Fast linter
- **C/C++ Tools** - C/C++ support
- **Copilot** - AI code assistance
- **GitLens** - Git information
- **Prettier** - Code formatter
- **Live Server** - HTML preview

Install all recommended extensions:

1. Click Extensions icon in sidebar
2. Type `@recommended` in search
3. Install all suggestions

## Configuration Files

### `.vscode/settings.json`

- Python interpreter path
- Formatting and linting settings
- File exclusions for cleaner file explorer

### `.vscode/launch.json`

- Python debugging configurations
- C/C++ debugging configurations
- Module and Django/Flask support

### `pyproject.toml`

- Project metadata
- Black configuration
- Pylint settings
- Pytest configuration

### `.editorconfig`

- Cross-editor formatting rules
- Indentation and line endings
- Charset and trailing whitespace

### `.pylintrc`

- Detailed linting rules
- Message control
- Design constraints

### `.gitignore`

- Virtual environment
- Python cache files
- IDE and OS specific files

## Common Tasks

### Format Your Code

```powershell
.\.venv\Scripts\black.exe Python --line-length=88
```

### Run Linter

```powershell
.\.venv\Scripts\pylint.exe Python
```

### Run Tests

```powershell
.\.venv\Scripts\python.exe -m pytest Python -v
```

### Check Types

```powershell
.\.venv\Scripts\mypy.exe Python
```

### Create Requirements File

```powershell
.\.venv\Scripts\pip freeze > requirements.txt
```

## Troubleshooting

### Virtual Environment Not Recognized

1. Reload VS Code window (**Ctrl+R**)
2. Check Python interpreter: **Ctrl+Shift+P** → "Python: Select Interpreter"
3. Choose `./.venv/Scripts/python.exe`

### Packages Not Found

1. Verify venv is activated: `which python` (should show `.venv`)
2. Reinstall requirements: `.\.venv\Scripts\pip install -r requirements.txt`

### Linting Not Working

1. Check `.pylintrc` configuration
2. Ensure pylint is installed: `.\.venv\Scripts\pip install pylint`
3. Configure in settings.json if needed

### Debugging Issues

1. Ensure debug configuration is selected in Debug sidebar
2. Set breakpoints by clicking on line numbers
3. Check that the file path is correct

## Performance Tips

1. **Use Virtual Environment** - Ensures isolated dependencies
2. **Format on Save** - Keeps code clean automatically
3. **Type Hints** - Improves IDE performance and catches bugs
4. **Exclude Folders** - `.gitignore` helps with performance
5. **Update Pylance** - Keeps IntelliSense responsive

## Next Steps

1. ✅ Virtual environment created
2. ✅ Dependencies installed
3. ✅ VS Code configured
4. ✅ Ready to develop!

Start coding and explore the example files in the Python folder.

---

**Last Updated**: May 25, 2026
**Python Version**: 3.8+
**Status**: Ready for Development ✓
