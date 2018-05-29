//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol IESVideoPreloadProtocol <NSObject>
+ (id)sharedPreloader;
- (void)clear;
- (void)cancel;
- (void)cancelGroup:(NSString *)arg1;
- (void)cancelTaskForVideoID:(NSString *)arg1 andVideoURL:(NSString *)arg2;
- (void)preloadVideoID:(NSString *)arg1 andVideoURL:(NSString *)arg2 preloadSize:(unsigned long long)arg3 group:(NSString *)arg4;
- (void)preloadVideoID:(NSString *)arg1 andVideoURL:(NSString *)arg2 preloadSize:(unsigned long long)arg3;
@end

