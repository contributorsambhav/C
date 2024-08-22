### Getting Started with Redux Toolkit

#### Purpose

Redux Toolkit is designed to be the standard way to write Redux logic. It addresses common concerns about Redux, such as:

- **Complex Configuration:** Simplifies the setup of a Redux store.
- **Additional Packages:** Reduces the need for multiple additional packages.
- **Boilerplate Code:** Minimizes the amount of boilerplate code required.

Redux Toolkit includes utilities to simplify common use cases, handle setup processes, and provide useful tools that simplify application code. It also features "RTK Query" for data fetching and caching, reducing the need to write custom data-fetching logic.

#### Installation

**Create a React Redux App:**

Use the official Redux Toolkit + TypeScript template for Vite or the Next.js `with-redux` template for a quick start.

```sh
# Vite with Redux+TS template
npx degit reduxjs/redux-templates/packages/vite-template-redux my-app

# Next.js with `with-redux` template
npx create-next-app --example with-redux my-app
```

For React Native, recommended templates include:
- [react-native-template-redux-typescript](https://github.com/rahsheen/react-native-template-redux-typescript)
- [expo-template-redux-typescript](https://github.com/rahsheen/expo-template-redux-typescript)

**For an Existing App:**

Install Redux Toolkit via npm or yarn.

```sh
npm install @reduxjs/toolkit
# If React bindings are needed
npm install react-redux
```

#### What's Included

Redux Toolkit provides several APIs:

- **`configureStore()`**
  - Simplifies store configuration with good defaults.
  - Automatically combines slice reducers, includes `redux-thunk` middleware by default, and enables Redux DevTools.

- **`createReducer()`**
  - Simplifies reducer creation using a lookup table of action types to case reducer functions.
  - Utilizes the `immer` library for immutable updates.

- **`createAction()`**
  - Generates action creator functions for given action type strings.

- **`createSlice()`**
  - Accepts an object of reducer functions, a slice name, and an initial state value.
  - Automatically generates a slice reducer with corresponding action creators and action types.

- **`combineSlices()`**
  - Combines multiple slices into a single reducer.
  - Allows "lazy loading" of slices after initialization.

- **`createAsyncThunk`**
  - Generates a thunk for async actions, dispatching `pending`, `fulfilled`, and `rejected` action types based on a promise.

- **`createEntityAdapter`**
  - Generates reusable reducers and selectors to manage normalized data in the store.

- **`createSelector`**
  - Utility from the Reselect library, re-exported for ease of use.

#### RTK Query

RTK Query is an optional addon within Redux Toolkit for data fetching and caching. It simplifies common data loading tasks in web applications. RTK Query is built on Redux Toolkit and uses Redux internally.

**APIs included in RTK Query:**

- **`createApi()`**
  - Defines a set of endpoints and describes how to retrieve and transform data.
  - Typically used once per app, with "one API slice per base URL."

- **`fetchBaseQuery()`**
  - Simplifies requests with a small wrapper around `fetch`.
  - Recommended as the base query in `createApi`.

- **`<ApiProvider />`**
  - Can be used as a provider if there isn't an existing Redux store.

- **`setupListeners()`**
  - Enables `refetchOnMount` and `refetchOnReconnect` behaviors.

#### Learn Redux

**Tutorials:**

- **Redux Essentials Tutorial:**
  - A "top-down" tutorial teaching the latest recommended APIs and best practices.

- **Redux Fundamentals Tutorial:**
  - A "bottom-up" tutorial explaining how Redux works from first principles.

**Livestream:**

- **Learn Modern Redux:**
  - A live-coded example app showcasing Redux Toolkit, React-Redux hooks with TypeScript, and RTK Query.

**Help and Discussion:**

- **Reactiflux Discord (#redux channel):**
  - Official resource for questions and learning Redux.
  
- **Stack Overflow:**
  - Use the `#redux` tag for questions.

Redux Toolkit simplifies Redux development, making it easier to configure, reducing the need for additional packages, and minimizing boilerplate code. Whether you are new to Redux or looking to simplify existing Redux applications, Redux Toolkit provides the tools to enhance your development experience.
