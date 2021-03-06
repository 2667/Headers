//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WBAudioRender : NSObject
{
    struct _opaque_pthread_mutex_t _mutex;
    struct _opaque_pthread_cond_t _cond;
    struct OpaqueAudioComponentInstance *_outputAudioUnit;
    char *_buffer;
    unsigned long long _bufferByteCount;
    unsigned long long _firstValidByteOffset;
    unsigned long long _validByteCount;
    unsigned long long _bufferTime;
    _Bool _started;
    unsigned long long _startedTime;
    unsigned long long _interruptedTime;
    unsigned long long _totalInterruptedInterval;
    double _volume;
    _Bool _interrupted;
}

+ (double)p_absoluteTimeConversion;
+ (id)rendererWithBufferTime:(unsigned long long)arg1;
@property(nonatomic, getter=isInterrupted) _Bool interrupted; // @synthesize interrupted=_interrupted;
@property(readonly, nonatomic, getter=isStarted) _Bool started; // @synthesize started=_started;
- (void)p_tearDownWithoutStop;
- (void)p_setShouldInterceptTiming:(_Bool)arg1;
- (void)p_resetTiming;
- (void)dealloc;
- (void)tearDown;
- (void)flush;
- (void)stop;
- (_Bool)setUp;
@property(nonatomic) double volume;
@property(readonly, nonatomic) unsigned long long currentTime;
- (void)flushShouldResetTiming:(_Bool)arg1;
- (void)renderBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)initWithBufferTime:(unsigned long long)arg1;

@end

