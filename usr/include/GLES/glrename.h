#ifndef __glrename_h_
#define __glrename_h_

#if defined(_GL_11_APPENDIX)

#define _GL_11_RENAME_2(api, appendix)  api ## appendix
#define _GL_11_RENAME_1(api, appendix)  _GL_11_RENAME_2(api, appendix)
#define gcmGLES11(api)                  _GL_11_RENAME_1(api, _GL_11_APPENDIX)

#define glAlphaFunc                     gcmGLES11(glAlphaFunc)
#define glActiveTexture                 gcmGLES11(glActiveTexture)
#define glAlphaFuncx                    gcmGLES11(glAlphaFuncx)
#define glAlphaFuncxOES                 gcmGLES11(glAlphaFuncxOES)
#define glBindBuffer                    gcmGLES11(glBindBuffer)
#define glBindFramebufferOES            gcmGLES11(glBindFramebufferOES)
#define glBindRenderbufferOES           gcmGLES11(glBindRenderbufferOES)
#define glBindTexture                   gcmGLES11(glBindTexture)
#define glBlendFunc                     gcmGLES11(glBlendFunc)
#define glBufferData                    gcmGLES11(glBufferData)
#define glBufferSubData                 gcmGLES11(glBufferSubData)
#define glCheckFramebufferStatusOES     gcmGLES11(glCheckFramebufferStatusOES)
#define glClear                         gcmGLES11(glClear)
#define glClearColor                    gcmGLES11(glClearColor)
#define glClearColorx                   gcmGLES11(glClearColorx)
#define glClearColorxOES                gcmGLES11(glClearColorxOES)
#define glClearDepthf                   gcmGLES11(glClearDepthf)
#define glClearDepthfOES                gcmGLES11(glClearDepthfOES)
#define glClearDepthx                   gcmGLES11(glClearDepthx)
#define glClearDepthxOES                gcmGLES11(glClearDepthxOES)
#define glClearStencil                  gcmGLES11(glClearStencil)
#define glClientActiveTexture           gcmGLES11(glClientActiveTexture)
#define glClipPlanef                    gcmGLES11(glClipPlanef)
#define glClipPlanefOES                 gcmGLES11(glClipPlanefOES)
#define glClipPlanex                    gcmGLES11(glClipPlanex)
#define glClipPlanexOES                 gcmGLES11(glClipPlanexOES)
#define glColor4f                       gcmGLES11(glColor4f)
#define glColor4ub                      gcmGLES11(glColor4ub)
#define glColor4x                       gcmGLES11(glColor4x)
#define glColor4xOES                    gcmGLES11(glColor4xOES)
#define glColorMask                     gcmGLES11(glColorMask)
#define glColorPointer                  gcmGLES11(glColorPointer)
#define glCompressedTexImage2D          gcmGLES11(glCompressedTexImage2D)
#define glCompressedTexSubImage2D       gcmGLES11(glCompressedTexSubImage2D)
#define glCopyTexImage2D                gcmGLES11(glCopyTexImage2D)
#define glCopyTexSubImage2D             gcmGLES11(glCopyTexSubImage2D)
#define glCullFace                      gcmGLES11(glCullFace)
#define glCurrentPaletteMatrixOES       gcmGLES11(glCurrentPaletteMatrixOES)
#define glDeleteBuffers                 gcmGLES11(glDeleteBuffers)
#define glDeleteFramebuffersOE          gcmGLES11(glDeleteFramebuffersOES)
#define glDeleteRenderbuffersOES        gcmGLES11(glDeleteRenderbuffersOES)
#define glDeleteTextures                gcmGLES11(glDeleteTextures)
#define glDepthFunc                     gcmGLES11(glDepthFunc)
#define glDepthMask                     gcmGLES11(glDepthMask)
#define glDepthRangef                   gcmGLES11(glDepthRangef)
#define glDepthRangefOES                gcmGLES11(glDepthRangefOES)
#define glDepthRangex                   gcmGLES11(glDepthRangex)
#define glDepthRangexOES                gcmGLES11(glDepthRangexOES)
#define glDisable                       gcmGLES11(glDisable)
#define glDisableClientState            gcmGLES11(glDisableClientState)
#define glDrawArrays                    gcmGLES11(glDrawArrays)
#define glDrawElements                  gcmGLES11(glDrawElements)
#define glDrawTexfOES                   gcmGLES11(glDrawTexfOES)
#define glDrawTexfvOES                  gcmGLES11(glDrawTexfvOES)
#define glDrawTexiOES                   gcmGLES11(glDrawTexiOES)
#define glDrawTexivOES                  gcmGLES11(glDrawTexivOES)
#define glDrawTexsOES                   gcmGLES11(glDrawTexsOES)
#define glDrawTexsvOES                  gcmGLES11(glDrawTexsvOES)
#define glDrawTexxOES                   gcmGLES11(glDrawTexxOES)
#define glDrawTexxvOES                  gcmGLES11(glDrawTexxvOES)
#define glEGLImageTargetRenderbufferStorageOES \
            gcmGLES11(glEGLImageTargetRenderbufferStorageOES)
#define glEGLImageTargetTexture2DOES    gcmGLES11(glEGLImageTargetTexture2DOES)
#define glEnable                        gcmGLES11(glEnable)
#define glEnableClientState             gcmGLES11(glEnableClientState)
#define glFinish                        gcmGLES11(glFinish)
#define glFlush                         gcmGLES11(glFlush)
#define glFogf                          gcmGLES11(glFogf)
#define glFogfv                         gcmGLES11(glFogfv)
#define glFogx                          gcmGLES11(glFogx)
#define glFogxOES                       gcmGLES11(glFogxOES)
#define glFogxv                         gcmGLES11(glFogxv)
#define glFogxvOES                      gcmGLES11(glFogxvOES)
#define glFramebufferRenderbufferOES    gcmGLES11(glFramebufferRenderbufferOES)
#define glFramebufferTexture2DOES       gcmGLES11(glFramebufferTexture2DOES)
#define glFrontFace                     gcmGLES11(glFrontFace)
#define glFrustumf                      gcmGLES11(glFrustumf)
#define glFrustumfOES                   gcmGLES11(glFrustumfOES)
#define glFrustumx                      gcmGLES11(glFrustumx)
#define glFrustumxOES                   gcmGLES11(glFrustumxOES)
#define glGenBuffers                    gcmGLES11(glGenBuffers)
#define glGenerateMipmapOES             gcmGLES11(glGenerateMipmapOES)
#define glGenFramebuffersOES            gcmGLES11(glGenFramebuffersOES)
#define glGenRenderbuffersOES           gcmGLES11(glGenRenderbuffersOES)
#define glGenTextures                   gcmGLES11(glGenTextures)
#define glGetBooleanv                   gcmGLES11(glGetBooleanv)
#define glGetBufferParameteriv          gcmGLES11(glGetBufferParameteriv)
#define glGetClipPlanef                 gcmGLES11(glGetClipPlanef)
#define glGetClipPlanefOES              gcmGLES11(glGetClipPlanefOES)
#define glGetClipPlanex                 gcmGLES11(glGetClipPlanex)
#define glGetClipPlanexOES              gcmGLES11(glGetClipPlanexOES)
#define glGetError                      gcmGLES11(glGetError)
#define glGetFixedv                     gcmGLES11(glGetFixedv)
#define glGetFixedvOES                  gcmGLES11(glGetFixedvOES)
#define glGetFloatv                     gcmGLES11(glGetFloatv)
#define glGetFramebufferAttachmentParameterivOES \
            gcmGLES11(glGetFramebufferAttachmentParameterivOES)
#define glGetIntegerv                   gcmGLES11(glGetIntegerv)
#define glGetLightfv                    gcmGLES11(glGetLightfv)
#define glGetLightxv                    gcmGLES11(glGetLightxv)
#define glGetLightxvOES                 gcmGLES11(glGetLightxvOES)
#define glGetMaterialfv                 gcmGLES11(glGetMaterialfv)
#define glGetMaterialxv                 gcmGLES11(glGetMaterialxv)
#define glGetMaterialxvOES              gcmGLES11(glGetMaterialxvOES)
#define glGetPointerv                   gcmGLES11(glGetPointerv)
#define glGetRenderbufferParameterivOES \
            gcmGLES11(glGetRenderbufferParameterivOES)
#define glGetString                     gcmGLES11(glGetString)
#define glGetTexEnvfv                   gcmGLES11(glGetTexEnvfv)
#define glGetTexEnviv                   gcmGLES11(glGetTexEnviv)
#define glGetTexEnvxv                   gcmGLES11(glGetTexEnvxv)
#define glGetTexEnvxvOES                gcmGLES11(glGetTexEnvxvOES)
#define glGetTexGenfvOES                gcmGLES11(glGetTexGenfvOES)
#define glGetTexGenivOES                gcmGLES11(glGetTexGenivOES)
#define glGetTexGenxvOES                gcmGLES11(glGetTexGenxvOES)
#define glGetTexParameterfv             gcmGLES11(glGetTexParameterfv)
#define glGetTexParameteriv             gcmGLES11(glGetTexParameteriv)
#define glGetTexParameterxv             gcmGLES11(glGetTexParameterxv)
#define glGetTexParameterxvOES          gcmGLES11(glGetTexParameterxvOES)
#define glHint                          gcmGLES11(glHint)
#define glIsBuffer                      gcmGLES11(glIsBuffer)
#define glIsEnabled                     gcmGLES11(glIsEnabled)
#define glIsFramebufferOES              gcmGLES11(glIsFramebufferOES)
#define glIsRenderbufferOES             gcmGLES11(glIsRenderbufferOES)
#define glIsTexture                     gcmGLES11(glIsTexture)
#define glLightModelf                   gcmGLES11(glLightModelf)
#define glLightModelfv                  gcmGLES11(glLightModelfv)
#define glLightModelx                   gcmGLES11(glLightModelx)
#define glLightModelxOES                gcmGLES11(glLightModelxOES)
#define glLightModelxv                  gcmGLES11(glLightModelxv)
#define glLightModelxvOES               gcmGLES11(glLightModelxvOES)
#define glLightf                        gcmGLES11(glLightf)
#define glLightfv                       gcmGLES11(glLightfv)
#define glLightx                        gcmGLES11(glLightx)
#define glLightxOES                     gcmGLES11(glLightxOES)
#define glLightxv                       gcmGLES11(glLightxv)
#define glLightxvOES                    gcmGLES11(glLightxvOES)
#define glLineWidth                     gcmGLES11(glLineWidth)
#define glLineWidthx                    gcmGLES11(glLineWidthx)
#define glLineWidthxOES                 gcmGLES11(glLineWidthxOES)
#define glLoadIdentity                  gcmGLES11(glLoadIdentity)
#define glLoadMatrixf                   gcmGLES11(glLoadMatrixf)
#define glLoadMatrixx                   gcmGLES11(glLoadMatrixx)
#define glLoadMatrixxOES                gcmGLES11(glLoadMatrixxOES)
#define glLoadPaletteFromModelViewMatrixOES \
            gcmGLES11(glLoadPaletteFromModelViewMatrixOES)
#define glLogicOp                       gcmGLES11(glLogicOp)
#define glMaterialf                     gcmGLES11(glMaterialf)
#define glMaterialfv                    gcmGLES11(glMaterialfv)
#define glMaterialx                     gcmGLES11(glMaterialx)
#define glMaterialxOES                  gcmGLES11(glMaterialxOES)
#define glMaterialxv                    gcmGLES11(glMaterialxv)
#define glMaterialxvOES                 gcmGLES11(glMaterialxvOES)
#define glMatrixIndexPointerOES         gcmGLES11(glMatrixIndexPointerOES)
#define glMatrixMode                    gcmGLES11(glMatrixMode)
#define glMultMatrixf                   gcmGLES11(glMultMatrixf)
#define glMultMatrixx                   gcmGLES11(glMultMatrixx)
#define glMultMatrixxOES                gcmGLES11(glMultMatrixxOES)
#define glMultiTexCoord4f               gcmGLES11(glMultiTexCoord4f)
#define glMultiTexCoord4x               gcmGLES11(glMultiTexCoord4x)
#define glMultiTexCoord4xOES            gcmGLES11(glMultiTexCoord4xOES)
#define glNormal3f                      gcmGLES11(glNormal3f)
#define glNormal3x                      gcmGLES11(glNormal3x)
#define glNormal3xOES                   gcmGLES11(glNormal3xOES)
#define glNormalPointer                 gcmGLES11(glNormalPointer)
#define glOrthof                        gcmGLES11(glOrthof)
#define glOrthofOES                     gcmGLES11(glOrthofOES)
#define glOrthox                        gcmGLES11(glOrthox)
#define glOrthoxOES                     gcmGLES11(glOrthoxOES)
#define glPixelStorei                   gcmGLES11(glPixelStorei)
#define glPointParameterf               gcmGLES11(glPointParameterf)
#define glPointParameterfv              gcmGLES11(glPointParameterfv)
#define glPointParameterx               gcmGLES11(glPointParameterx)
#define glPointParameterxOES            gcmGLES11(glPointParameterxOES)
#define glPointParameterxv              gcmGLES11(glPointParameterxv)
#define glPointParameterxvOES           gcmGLES11(glPointParameterxvOES)
#define glPointSize                     gcmGLES11(glPointSize)
#define glPointSizePointerOES           gcmGLES11(glPointSizePointerOES)
#define glPointSizex                    gcmGLES11(glPointSizex)
#define glPointSizexOES                 gcmGLES11(glPointSizexOES)
#define glPolygonOffset                 gcmGLES11(glPolygonOffset)
#define glPolygonOffsetx                gcmGLES11(glPolygonOffsetx)
#define glPolygonOffsetxOES             gcmGLES11(glPolygonOffsetxOES)
#define glPopMatrix                     gcmGLES11(glPopMatrix)
#define glPushMatrix                    gcmGLES11(glPushMatrix)
#define glQueryMatrixxOES               gcmGLES11(glQueryMatrixxOES)
#define glReadPixels                    gcmGLES11(glReadPixels)
#define glRenderbufferStorageOES        gcmGLES11(glRenderbufferStorageOES)
#define glRotatef                       gcmGLES11(glRotatef)
#define glRotatex                       gcmGLES11(glRotatex)
#define glRotatexOES                    gcmGLES11(glRotatexOES)
#define glSampleCoverage                gcmGLES11(glSampleCoverage)
#define glSampleCoveragex               gcmGLES11(glSampleCoveragex)
#define glSampleCoveragexOES            gcmGLES11(glSampleCoveragexOES)
#define glScalef                        gcmGLES11(glScalef)
#define glScalex                        gcmGLES11(glScalex)
#define glScalexOES                     gcmGLES11(glScalexOES)
#define glScissor                       gcmGLES11(glScissor)
#define glShadeModel                    gcmGLES11(glShadeModel)
#define glStencilFunc                   gcmGLES11(glStencilFunc)
#define glStencilMask                   gcmGLES11(glStencilMask)
#define glStencilOp                     gcmGLES11(glStencilOp)
#define glTexCoordPointer               gcmGLES11(glTexCoordPointer)
#define glTexEnvf                       gcmGLES11(glTexEnvf)
#define glTexEnvfv                      gcmGLES11(glTexEnvfv)
#define glTexEnvi                       gcmGLES11(glTexEnvi)
#define glTexEnviv                      gcmGLES11(glTexEnviv)
#define glTexEnvx                       gcmGLES11(glTexEnvx)
#define glTexEnvxOES                    gcmGLES11(glTexEnvxOES)
#define glTexEnvxv                      gcmGLES11(glTexEnvxv)
#define glTexEnvxvOES                   gcmGLES11(glTexEnvxvOES)
#define glTexGenfOES                    gcmGLES11(glTexGenfOES)
#define glTexGenfvOES                   gcmGLES11(glTexGenfvOES)
#define glTexGeniOES                    gcmGLES11(glTexGeniOES)
#define glTexGenivOES                   gcmGLES11(glTexGenivOES)
#define glTexGenxOES                    gcmGLES11(glTexGenxOES)
#define glTexGenxvOES                   gcmGLES11(glTexGenxvOES)
#define glTexImage2D                    gcmGLES11(glTexImage2D)
#define glTexParameterf                 gcmGLES11(glTexParameterf)
#define glTexParameterfv                gcmGLES11(glTexParameterfv)
#define glTexParameteri                 gcmGLES11(glTexParameteri)
#define glTexParameteriv                gcmGLES11(glTexParameteriv)
#define glTexParameterx                 gcmGLES11(glTexParameterx)
#define glTexParameterxOES              gcmGLES11(glTexParameterxOES)
#define glTexParameterxv                gcmGLES11(glTexParameterxv)
#define glTexParameterxvOES             gcmGLES11(glTexParameterxvOES)
#define glTexSubImage2D                 gcmGLES11(glTexSubImage2D)
#define glTranslatef                    gcmGLES11(glTranslatef)
#define glTranslatex                    gcmGLES11(glTranslatex)
#define glTranslatexOES                 gcmGLES11(glTranslatexOES)
#define glVertexPointer                 gcmGLES11(glVertexPointer)
#define glViewport                      gcmGLES11(glViewport)
#define glWeightPointerOES              gcmGLES11(glWeightPointerOES)

#define glMultiDrawArraysEXT            gcmGLES11(glMultiDrawArraysEXT)
#define glMultiDrawElementsEXT          gcmGLES11(glMultiDrawElementsEXT)

#define glMapBufferOES                  gcmGLES11(glMapBufferOES)
#define glUnmapBufferOES                gcmGLES11(glUnmapBufferOES)
#define glGetBufferPointervOES          gcmGLES11(glGetBufferPointervOES)

#define glBlendEquationOES              gcmGLES11(glBlendEquationOES)
#define glBlendEquationSeparateOES      gcmGLES11(glBlendEquationSeparateOES)
#define glBlendFuncSeparateOES          gcmGLES11(glBlendFuncSeparateOES)

#define glIsFramebufferOES              gcmGLES11(glIsFramebufferOES)
#define glBindFramebufferOES            gcmGLES11(glBindFramebufferOES)
#define glDeleteFramebuffersOES         gcmGLES11(glDeleteFramebuffersOES)
#define glGenFramebuffersOES            gcmGLES11(glGenFramebuffersOES)
#define glCheckFramebufferStatusOES     gcmGLES11(glCheckFramebufferStatusOES)
#define glFramebufferRenderbufferOES    gcmGLES11(glFramebufferRenderbufferOES)
#define glFramebufferTexture2DOES       gcmGLES11(glFramebufferTexture2DOES)
#define glGetFramebufferAttachmentParameterivOES \
    gcmGLES11(glGetFramebufferAttachmentParameterivOES)

#define glClipPlanefIMG                 gcmGLES11(glClipPlanefIMG)
#define glClipPlanexIMG                 gcmGLES11(glClipPlanexIMG)

#define glTexDirectVIV                  gcmGLES11(glTexDirectVIV)
#define glTexDirectVIVMap               gcmGLES11(glTexDirectVIVMap)
#define glTexDirectTiledMapVIV          gcmGLES11(glTexDirectTiledMapVIV)
#define glTexDirectInvalidateVIV        gcmGLES11(glTexDirectInvalidateVIV)

#define glBindBufferARB                 gcmGLES11(glBindBufferARB)
#define glBufferDataARB                 gcmGLES11(glBufferDataARB)
#define glBufferSubDataARB              gcmGLES11(glBufferSubDataARB)
#define glDeleteBuffersARB              gcmGLES11(glDeleteBuffersARB)
#define glGenBuffersARB                 gcmGLES11(glGenBuffersARB)
#define glGetBufferParameterivARB       gcmGLES11(glGetBufferParameterivARB)

#endif /* _GL_11_APPENDIX */
#endif /* __glrename_h_ */
