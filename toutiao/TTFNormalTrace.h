//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface TTFNormalTrace : NSObject
{
    _Bool _wsHt;
    int _status;
    long long _aid;
    long long _rt;
    long long _ht;
    NSString *_extra;
}

@property(copy, nonatomic) NSString *extra; // @synthesize extra=_extra;
@property(nonatomic) long long ht; // @synthesize ht=_ht;
@property(nonatomic) long long rt; // @synthesize rt=_rt;
@property(nonatomic) _Bool wsHt; // @synthesize wsHt=_wsHt;
@property(nonatomic) long long aid; // @synthesize aid=_aid;
@property(nonatomic) int status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)traceDict;
- (id)initWithHeartBeatTrace:(id)arg1;

@end
