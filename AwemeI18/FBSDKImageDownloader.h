//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSURLCache;

@interface FBSDKImageDownloader : NSObject
{
    NSURLCache *_urlCache;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)downloadImageWithURL:(id)arg1 ttl:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeAll;
- (id)init;

@end

