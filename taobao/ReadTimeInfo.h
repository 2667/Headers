//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface ReadTimeInfo : NSObject
{
    long long sessionType;
    NSString *sessionId;
    unsigned long long timeStamp;
    unsigned long long unreadCount;
    long long lastMsgTime;
    NSDictionary *dictMsgInfo;
    NSDictionary *extData;
    unsigned long long _upTime;
}

@property(nonatomic) unsigned long long upTime; // @synthesize upTime=_upTime;
@property(retain, nonatomic) NSDictionary *extData; // @synthesize extData;
@property(retain, nonatomic) NSDictionary *dictMsgInfo; // @synthesize dictMsgInfo;
@property(nonatomic) long long lastMsgTime; // @synthesize lastMsgTime;
@property(nonatomic) unsigned long long unreadCount; // @synthesize unreadCount;
@property(nonatomic) unsigned long long timeStamp; // @synthesize timeStamp;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId;
@property(nonatomic) long long sessionType; // @synthesize sessionType;
- (void).cxx_destruct;
- (id)init;

@end
