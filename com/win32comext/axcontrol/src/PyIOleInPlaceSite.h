// This file declares the IOleInPlaceSite Interface and Gateway for Python.
// Generated by makegw.py
// ---------------------------------------------------
//
// Interface Declaration

class PyIOleInPlaceSite : public PyIOleWindow {
   public:
    MAKE_PYCOM_CTOR(PyIOleInPlaceSite);
    static IOleInPlaceSite *GetI(PyObject *self);
    static PyComTypeObject type;

    // The Python methods
    static PyObject *CanInPlaceActivate(PyObject *self, PyObject *args);
    static PyObject *OnInPlaceActivate(PyObject *self, PyObject *args);
    static PyObject *OnUIActivate(PyObject *self, PyObject *args);
    static PyObject *GetWindowContext(PyObject *self, PyObject *args);
    static PyObject *Scroll(PyObject *self, PyObject *args);
    static PyObject *OnUIDeactivate(PyObject *self, PyObject *args);
    static PyObject *OnInPlaceDeactivate(PyObject *self, PyObject *args);
    static PyObject *DiscardUndoState(PyObject *self, PyObject *args);
    static PyObject *DeactivateAndUndo(PyObject *self, PyObject *args);
    static PyObject *OnPosRectChange(PyObject *self, PyObject *args);

   protected:
    PyIOleInPlaceSite(IUnknown *pdisp);
    ~PyIOleInPlaceSite();
};
// ---------------------------------------------------
//
// Gateway Declaration

class PyGOleInPlaceSite : public PyGOleWindow, public IOleInPlaceSite {
   protected:
    PyGOleInPlaceSite(PyObject *instance) : PyGOleWindow(instance) { ; }
    PYGATEWAY_MAKE_SUPPORT2(PyGOleInPlaceSite, IOleInPlaceSite, IID_IOleInPlaceSite, PyGOleWindow)

    // IOleWindow
    STDMETHOD(GetWindow)(HWND __RPC_FAR *phwnd);

    STDMETHOD(ContextSensitiveHelp)(BOOL fEnterMode);

    // IOleInPlaceSite
    STDMETHOD(CanInPlaceActivate)(void);

    STDMETHOD(OnInPlaceActivate)(void);

    STDMETHOD(OnUIActivate)(void);

    STDMETHOD(GetWindowContext)
    (IOleInPlaceFrame __RPC_FAR *__RPC_FAR *ppFrame, IOleInPlaceUIWindow __RPC_FAR *__RPC_FAR *ppDoc,
     LPRECT lprcPosRect, LPRECT lprcClipRect, LPOLEINPLACEFRAMEINFO lpFrameInfo);

    STDMETHOD(Scroll)(SIZE scrollExtant);

    STDMETHOD(OnUIDeactivate)(BOOL fUndoable);

    STDMETHOD(OnInPlaceDeactivate)(void);

    STDMETHOD(DiscardUndoState)(void);

    STDMETHOD(DeactivateAndUndo)(void);

    STDMETHOD(OnPosRectChange)(LPCRECT lprcPosRect);
};
