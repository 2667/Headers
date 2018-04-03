//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "FileDetailLogicDelegate-Protocol.h"
#import "UIDocumentInteractionControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"

@class FileDetailLogicController, MMMPMoviePlayerController, MMProgressView, NSString, ShareDataToOpenSDKController, UIButton, UIDocumentInteractionController, UILabel, UITapGestureRecognizer, UIView, WCActionSheet;

@interface FileDetailViewController : MMUIViewController <WCActionSheetDelegate, FileDetailLogicDelegate, UIDocumentInteractionControllerDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate, UIWebViewDelegate, WKNavigationDelegate>
{
    FileDetailLogicController *m_logicController;
    _Bool m_bDownloading;
    _Bool m_bIsDelayingDownload;
    MMProgressView *m_viewProgress;
    UILabel *m_labProgress;
    UIButton *m_btnCancelDownload;
    UIButton *m_btnDownload;
    UILabel *m_labCannotOpen;
    UIButton *m_btnViewDetail;
    UIButton *m_btnOpenByApp;
    UILabel *m_labelFileName;
    _Bool m_bPreview;
    unsigned int m_uiPreviewType;
    UIDocumentInteractionController *m_vcDocument;
    _Bool m_bOpenMode;
    MMMPMoviePlayerController *_moviePlayerController;
    WCActionSheet *m_actionSheet;
    ShareDataToOpenSDKController *m_shareOpenSDKController;
    UIView *m_webView;
    _Bool _bIsNaviBarHide;
    UITapGestureRecognizer *_singleTapRec;
    _Bool _bIsDisableTapRec;
    struct CGPoint m_lastContentOffset;
    UIButton *m_shareToFriendBtn;
    _Bool m_showInfoOnly;
    NSString *_m_tmpFilePath;
}

@property(retain, nonatomic) NSString *m_tmpFilePath; // @synthesize m_tmpFilePath=_m_tmpFilePath;
@property(nonatomic) _Bool m_bOpenMode; // @synthesize m_bOpenMode;
@property(nonatomic) _Bool m_showInfoOnly; // @synthesize m_showInfoOnly;
- (void).cxx_destruct;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (id)getCurrentViewController;
- (void)onCanShareToFriendByButton;
- (void)onRevoked;
- (void)onDownloadFilePartLen:(unsigned int)arg1 TotalLen:(unsigned long long)arg2;
- (void)onDownloadFileSuccess;
- (void)onDownloadFileFail:(_Bool)arg1;
- (void)initShareToFriendBtn;
- (void)onSingleTap:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)resetPdfViewFrame;
- (_Bool)hasPdfView;
- (void)setNaviBarHide:(_Bool)arg1 animation:(_Bool)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)documentInteractionController:(id)arg1 didEndSendingToApplication:(id)arg2;
- (void)SetProgressPartLen:(unsigned long long)arg1 TotalLen:(unsigned long long)arg2;
- (void)ShowProgressView;
- (void)ShowDownloadBtn;
- (void)StopDownloadAndUpdateView;
- (void)StopDownload;
- (void)StartDownload:(id)arg1;
- (_Bool)isExceptionFileName:(id)arg1;
- (void)OnReturn;
- (void)OnOperate:(id)arg1;
- (void)InitDownload;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)OnOpenByApp:(id)arg1;
- (id)getToSaveUrl;
- (void)OnLookDetail;
- (void)InitInfoiew;
- (void)InitPreview;
- (void)updateWebScrollViewInset;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)SetDownloadHide:(_Bool)arg1;
- (void)SetProgressHide:(_Bool)arg1;
- (id)GetFileDisplayName;
- (void)dealloc;
- (void)SafeDeleteDocument;
- (void)setLogicController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

