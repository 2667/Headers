//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WBPreloaderProtocol-Protocol.h"
#import "WeiboCubeCanvasProtocol-Protocol.h"

@class NSString;

@interface WBCanvasEngine : NSObject <WBPreloaderProtocol, WeiboCubeCanvasProtocol>
{
}

+ (id)sharedEngine;
+ (id)queue;
- (void)preloadForCanvasId:(id)arg1;
- (void)preloadForCanvasScheme:(id)arg1;
- (id)localTestCanvasResultForId:(id)arg1;
- (void)applicationWillEnterForeground;
- (void)_preloadForCanvasResult:(id)arg1;
- (void)_preloadFirstCanvasItemImages:(id)arg1;
- (id)_filterCanvasIdsNeedToBeProload:(id)arg1;
- (void)handlePreloadResponse:(id)arg1;
- (void)filterPreloadObject:(id)arg1;
- (Class)responseDataParseClass;
- (void)storageCanvasResult:(id)arg1;
- (id)localCanvasResultForId:(id)arg1;
- (void)loadNetCanvasId:(id)arg1 withParams:(id)arg2 andCompletion:(CDUnknownBlockType)arg3;
- (void)loadExtendPropertyOfCanvasId:(id)arg1 withOptionalParams:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

