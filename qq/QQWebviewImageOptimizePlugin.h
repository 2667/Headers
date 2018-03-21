//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQWebViewPluginQQBizBase.h>

#import <QQMainProject/UIActionSheetDelegate-Protocol.h>

@class NSString, TwoDimensionBarcodeManager, UIActionSheet, UILongPressGestureRecognizer;

@interface QQWebviewImageOptimizePlugin : QQWebViewPluginQQBizBase <UIActionSheetDelegate>
{
    TwoDimensionBarcodeManager *_qrcodeMgr;
    NSString *_scanResult;
    UILongPressGestureRecognizer *_longPressRecognizer;
    _Bool _hasQRCode;
    UIActionSheet *webViewAction;
    NSString *_imagePath;
    NSString *_srcUrl;
}

@property(retain, nonatomic) TwoDimensionBarcodeManager *qrcodeMgr; // @synthesize qrcodeMgr=_qrcodeMgr;
@property(retain, nonatomic) NSString *srcUrl; // @synthesize srcUrl=_srcUrl;
- (void).cxx_destruct;
- (id)qrcodeDecode:(struct CGImage *)arg1;
- (float)getFreeMemory;
- (id)scaleToSize:(id)arg1 size:(struct CGSize)arg2;
- (struct CGSize)getProperlySize:(struct CGSize)arg1;
- (_Bool)shouldScanQRCode;
- (void)showActionSheet:(id)arg1;
- (id)creatHttpClientSession:(_Bool)arg1;
- (void)showActionSheet;
- (void)handleQRCode;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleLongPressToSave:(id)arg1;
- (void)loadGesture;
- (_Bool)handleEvent:(int)arg1 userInfo:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
