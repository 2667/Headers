//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GIFTPRODToString.h"

@class NSString;

@interface GIFTPRODGiftMessageDeleteRequest : GIFTPRODToString
{
    NSString *_couponId;
    NSString *_resourceType;
    NSString *_bizType;
    NSString *_year;
}

@property(retain, nonatomic) NSString *year; // @synthesize year=_year;
@property(retain, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(retain, nonatomic) NSString *resourceType; // @synthesize resourceType=_resourceType;
@property(retain, nonatomic) NSString *couponId; // @synthesize couponId=_couponId;
- (void).cxx_destruct;

@end
