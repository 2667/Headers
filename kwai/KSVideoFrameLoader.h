//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSWeakObjectSet, NSLock, NSMutableDictionary, NSOperationQueue;
@protocol KSVideoFrameDisplaySource, OS_dispatch_queue;

@interface KSVideoFrameLoader : NSObject
{
    NSOperationQueue *_loadingQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id <KSVideoFrameDisplaySource> _displaySource;
    NSMutableDictionary *_statusDictionary;
    NSLock *_delegateLock;
    KSWeakObjectSet *_delegates;
}

@property(retain, nonatomic) KSWeakObjectSet *delegates; // @synthesize delegates=_delegates;
@property(retain, nonatomic) NSLock *delegateLock; // @synthesize delegateLock=_delegateLock;
@property(readonly, nonatomic) NSMutableDictionary *statusDictionary; // @synthesize statusDictionary=_statusDictionary;
@property(readonly, nonatomic) id <KSVideoFrameDisplaySource> displaySource; // @synthesize displaySource=_displaySource;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly, nonatomic) NSOperationQueue *loadingQueue; // @synthesize loadingQueue=_loadingQueue;
- (void).cxx_destruct;
- (struct CGSize)imageSize;
- (unsigned long long)frameCount;
- (void)invalidateAllFrames;
- (void)cancelLoadingFrameAtIndex:(unsigned long long)arg1;
- (id)loadFrameAtIndex:(unsigned long long)arg1;
- (void)_notifyDelegate:(id)arg1;
- (void)_enqueueFrameLoadingOperation:(id)arg1;
- (void)didReceiveMemoryWarning;
- (id)_statusForIndex:(unsigned long long)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 delegateQueue:(id)arg2;
- (void)dealloc;
- (id)initWithDisplaySource:(id)arg1 loadingQueue:(id)arg2;
- (id)initWithDisplaySource:(id)arg1;

@end

