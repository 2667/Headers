//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface WBNLDataReportModel : NSObject
{
    long long _liveType;
    NSString *_uid;
    NSString *_liveId;
    NSString *_mid;
    NSDate *_enterRoomDate;
}

@property(retain, nonatomic) NSDate *enterRoomDate; // @synthesize enterRoomDate=_enterRoomDate;
@property(copy, nonatomic) NSString *mid; // @synthesize mid=_mid;
@property(copy, nonatomic) NSString *liveId; // @synthesize liveId=_liveId;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(nonatomic) long long liveType; // @synthesize liveType=_liveType;
- (void).cxx_destruct;

@end

