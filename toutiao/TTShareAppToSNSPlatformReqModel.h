//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTABaseReqModel.h"

@class NSString;

@interface TTShareAppToSNSPlatformReqModel : TTABaseReqModel
{
    NSString *_platform;
    NSString *_device_id;
}

@property(copy, nonatomic) NSString *device_id; // @synthesize device_id=_device_id;
@property(copy, nonatomic) NSString *platform; // @synthesize platform=_platform;
- (void).cxx_destruct;
- (id)_requestParams;
- (id)init;

@end

