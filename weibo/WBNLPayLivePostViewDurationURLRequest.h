//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBNLURLRequest.h"

@class NSString;

@interface WBNLPayLivePostViewDurationURLRequest : WBNLURLRequest
{
    NSString *_live_id;
    long long _live_uid;
    long long _live_a;
    unsigned long long _live_b;
}

@property(nonatomic) unsigned long long live_b; // @synthesize live_b=_live_b;
@property(nonatomic) long long live_a; // @synthesize live_a=_live_a;
@property(nonatomic) long long live_uid; // @synthesize live_uid=_live_uid;
@property(copy, nonatomic) NSString *live_id; // @synthesize live_id=_live_id;
- (void).cxx_destruct;
- (id)path;

@end

