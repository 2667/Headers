//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface GIBaseReq : NSObject
{
    NSString *_appID;
    NSString *_giCid;
    NSNumber *_platform;
}

@property(retain, nonatomic) NSNumber *platform; // @synthesize platform=_platform;
@property(copy, nonatomic) NSString *giCid; // @synthesize giCid=_giCid;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (void).cxx_destruct;
- (id)getDicBySelf;

@end
