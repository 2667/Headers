//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, NSMutableArray, NSURL, WBStoryPixelBufferTexture;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, WBStoryBoomerangManagerDelegate;

@interface WBStoryBoomerangManager : NSObject
{
    struct {
        unsigned int isCancelled:1;
        unsigned int isCapturing:1;
        unsigned int isExporting:1;
        unsigned int isNeedStopCapture:1;
    } _flags;
    NSURL *_outputUrl;
    unsigned long long _loopCount;
    unsigned long long _minFrameCount;
    unsigned long long _maxFrameCount;
    double _frameDuration;
    id <WBStoryBoomerangManagerDelegate> _delegate;
    AVAssetWriter *_assetWriter;
    AVAssetWriterInput *_assetWriterInput;
    AVAssetWriterInputPixelBufferAdaptor *_assetWriterInputAdaptor;
    double _lastFrameTime;
    NSObject<OS_dispatch_queue> *_workingQueue;
    NSMutableArray *_pixelBufferArray;
    NSObject<OS_dispatch_semaphore> *_workingSemaphore;
    WBStoryPixelBufferTexture *_pixelBufferTexture;
    struct CGSize _videoSize;
}

@property(retain, nonatomic) WBStoryPixelBufferTexture *pixelBufferTexture; // @synthesize pixelBufferTexture=_pixelBufferTexture;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *workingSemaphore; // @synthesize workingSemaphore=_workingSemaphore;
@property(retain, nonatomic) NSMutableArray *pixelBufferArray; // @synthesize pixelBufferArray=_pixelBufferArray;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workingQueue; // @synthesize workingQueue=_workingQueue;
@property(nonatomic) double lastFrameTime; // @synthesize lastFrameTime=_lastFrameTime;
@property(retain, nonatomic) AVAssetWriterInputPixelBufferAdaptor *assetWriterInputAdaptor; // @synthesize assetWriterInputAdaptor=_assetWriterInputAdaptor;
@property(retain, nonatomic) AVAssetWriterInput *assetWriterInput; // @synthesize assetWriterInput=_assetWriterInput;
@property(retain, nonatomic) AVAssetWriter *assetWriter; // @synthesize assetWriter=_assetWriter;
@property(nonatomic) __weak id <WBStoryBoomerangManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double frameDuration; // @synthesize frameDuration=_frameDuration;
@property(nonatomic) unsigned long long maxFrameCount; // @synthesize maxFrameCount=_maxFrameCount;
@property(nonatomic) unsigned long long minFrameCount; // @synthesize minFrameCount=_minFrameCount;
@property(nonatomic) unsigned long long loopCount; // @synthesize loopCount=_loopCount;
@property(retain, nonatomic) NSURL *outputUrl; // @synthesize outputUrl=_outputUrl;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
- (void).cxx_destruct;
- (void)delegateFrameCount:(unsigned long long)arg1;
- (void)delegateDidFaild;
- (void)delegateDidFinish;
- (void)delegateDidStartGenerating;
- (void)createBoomerangeSequenceFromBuffers:(id)arg1 loopCount:(unsigned long long)arg2;
- (_Bool)prepareForWriting;
- (void)appendPixelBuffer:(struct __CVBuffer *)arg1;
- (void)prependPixelBuffer:(struct __CVBuffer *)arg1;
- (void)prependTexture:(unsigned int)arg1;
- (void)resetBoomerangManagerState;
- (void)releasePixelBuffers;
- (void)endCapture;
- (void)cancelCapture;
- (void)setNeedsEndCapture;
- (void)startBoomerangCapture;
- (id)initWithContext:(id)arg1;
- (void)dealloc;

@end

