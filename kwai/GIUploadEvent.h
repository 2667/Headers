//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GIBaseReq.h"

@class NSNumber, NSString;

@interface GIUploadEvent : GIBaseReq
{
    NSString *_eventId;
    NSNumber *_timestamp;
}

@property(retain, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
- (void).cxx_destruct;
- (id)getDicBySelf;
- (id)initWithDic:(id)arg1;

@end
