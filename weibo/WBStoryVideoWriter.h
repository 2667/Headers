//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, EAGLContext, GLProgram, NSError, NSMutableString, NSURL, WBStoryFPSAdapter;
@protocol OS_dispatch_queue;

@interface WBStoryVideoWriter : NSObject
{
    NSURL *_movieURL;
    struct CGSize _videoSize;
    AVAssetWriter *_assetWriter;
    AVAssetWriterInput *_assetWriterVideoInput;
    AVAssetWriterInputPixelBufferAdaptor *_assetWriterPixelBufferInput;
    EAGLContext *_context;
    GLProgram *_program;
    int _positionAttribute;
    int _textureCoordinateAttribute;
    int _inputTextureUniform;
    unsigned int _framebuffer;
    struct __CVBuffer *_renderTarget;
    struct __CVOpenGLESTextureCache *_textureCache;
    struct __CVBuffer *_renderTexture;
    NSObject<OS_dispatch_queue> *_workQueue;
    _Bool _writingIsFinished;
    WBStoryFPSAdapter *_FPSAdapter;
    struct {
        long long decent_time_drop_count;
        long long writer_busy_drop_count;
        long long speed_rate_drop_count;
        long long sample_append_err_count;
        long long sample_append_count;
        long long writer_busy_wait_time;
    } _logs;
    NSMutableString *_fpsAdapterRoute;
    _Bool _isWriting;
    float _speedRate;
    float _targetFps;
    float _fpsTolerate;
    unsigned long long _status;
    CDUnknownBlockType _progressBlock;
    CDUnknownBlockType _failureBlock;
    NSError *_error;
    CDStruct_1b6d18a9 _currentTime;
    CDStruct_1b6d18a9 _startTime;
    CDStruct_1b6d18a9 _lastCallBackTime;
}

@property(nonatomic) CDStruct_1b6d18a9 lastCallBackTime; // @synthesize lastCallBackTime=_lastCallBackTime;
@property(nonatomic) float fpsTolerate; // @synthesize fpsTolerate=_fpsTolerate;
@property(nonatomic) float targetFps; // @synthesize targetFps=_targetFps;
@property(nonatomic) float speedRate; // @synthesize speedRate=_speedRate;
@property(readonly, nonatomic) _Bool isWriting; // @synthesize isWriting=_isWriting;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) CDStruct_1b6d18a9 startTime; // @synthesize startTime=_startTime;
@property(nonatomic) CDStruct_1b6d18a9 currentTime; // @synthesize currentTime=_currentTime;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(nonatomic) __weak CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)appendLogStatisticsTo:(id)arg1;
- (void)resetLogStatistics;
- (void)progressCallBack:(_Bool)arg1;
- (void)processTexture:(unsigned int)arg1 time:(CDStruct_1b6d18a9)arg2;
- (void)renderTexture:(unsigned int)arg1;
- (void)setFilterFBO;
- (void)destroyDataFBO;
- (void)createDataFBO;
- (void)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)finishWritingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)cancelWriting;
- (_Bool)startWriting;
- (void)stopWithError:(id)arg1;
@property(readonly, nonatomic) long long interalAssetWriterStatus;
- (void)setupInputSettings;
- (void)dealloc;
- (void)setupProgram;
- (id)initWithMovieURL:(id)arg1 context:(id)arg2 outputSize:(struct CGSize)arg3;

@end

