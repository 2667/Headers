//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "AWEVideoCDNRequestDelegate-Protocol.h"

@class NSString;

@interface AWEVideoCDNRedirectTracker : NSObject <AWEVideoCDNRequestDelegate>
{
}

+ (id)sharedInstance;
+ (void)load;
- (void)videoDidReceiveResponse:(id)arg1 forRequest:(id)arg2;
- (void)videoWillRequest:(id)arg1 isRedirectRequest:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

