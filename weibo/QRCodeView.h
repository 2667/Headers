//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AVCaptureMetadataOutputObjectsDelegate-Protocol.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"

@class AVCaptureDevice, AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoPreviewLayer, NSArray, NSObject, NSString, NSTimer;
@protocol OS_dispatch_queue, QRCodeViewDelegate;

@interface QRCodeView : UIView <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureMetadataOutputObjectsDelegate>
{
    _Bool decoding;
    AVCaptureSession *captureSession;
    AVCaptureVideoPreviewLayer *prevLayer;
    _Bool isAlertShow;
    _Bool isScanStaticImage;
    int scanFailCount;
    int scanCount;
    NSTimer *timer;
    NSObject<OS_dispatch_queue> *_viewCapture;
    NSObject<OS_dispatch_queue> *_adjustQueue;
    double _previewScaleFactor;
    double _before;
    _Bool _needCallBackDecodingImage;
    AVCaptureDevice *device;
    AVCaptureDeviceInput *captureInput;
    struct CGRect _cropRect;
    int _scanResultSource;
    _Bool _blocking;
    _Bool _needCapture;
    AVCaptureVideoPreviewLayer *previewLayer;
    id <QRCodeViewDelegate> _delegate;
    NSArray *_supportedCodeTypes;
    struct CGPoint _focusPoint;
    struct CGPoint _focusPointOfInterestInView;
    struct CGRect _captureRect;
}

@property(retain, nonatomic) NSArray *supportedCodeTypes; // @synthesize supportedCodeTypes=_supportedCodeTypes;
@property(nonatomic) _Bool needCapture; // @synthesize needCapture=_needCapture;
@property(nonatomic) _Bool blocking; // @synthesize blocking=_blocking;
@property(nonatomic) struct CGRect captureRect; // @synthesize captureRect=_captureRect;
@property(nonatomic) struct CGPoint focusPointOfInterestInView; // @synthesize focusPointOfInterestInView=_focusPointOfInterestInView;
@property(nonatomic) id <QRCodeViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isDecoding) _Bool decoding; // @synthesize decoding;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer;
@property(retain, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession;
- (void).cxx_destruct;
- (struct CGRect)calRect:(struct CGSize)arg1;
@property(readonly, nonatomic) struct CGPoint focusPoint; // @synthesize focusPoint=_focusPoint;
- (void)subjectAreaDidChangeNotification:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)imageFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)layoutSubviews;
- (void)processStaticImage:(id)arg1;
- (void)removeOutputs;
- (void)addOutputs;
- (void)stopCapturing;
- (void)startCapturing;
- (void)stopDecoding;
- (void)startDecoding;
- (void)invalidateTimer;
- (void)adjustCamera;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

