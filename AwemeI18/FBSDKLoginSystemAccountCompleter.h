//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBSDKLoginCompleting-Protocol.h"

@class FBSDKLoginCompletionParameters;

@interface FBSDKLoginSystemAccountCompleter : NSObject <FBSDKLoginCompleting>
{
    FBSDKLoginCompletionParameters *_parameters;
}

- (void).cxx_destruct;
- (void)completeLogIn:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (id)initWithTokenString:(id)arg1 appID:(id)arg2;
- (id)init;

@end

