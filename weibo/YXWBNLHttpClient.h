//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBNLHttpClient.h"

@class NSString;

@interface YXWBNLHttpClient : WBNLHttpClient
{
    NSString *_liveChannel;
}

+ (id)sharedHttpClient;
@property(copy, nonatomic) NSString *liveChannel; // @synthesize liveChannel=_liveChannel;
- (void).cxx_destruct;
- (id)getFiltrParam:(id)arg1;
- (id)secData;

@end

