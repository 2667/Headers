//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSString;

@interface AWEZMCertVerifyModel : AWEBaseApiModel
{
    NSString *_bizNO;
    NSString *_merchantID;
}

@property(copy, nonatomic) NSString *merchantID; // @synthesize merchantID=_merchantID;
@property(copy, nonatomic) NSString *bizNO; // @synthesize bizNO=_bizNO;
- (void).cxx_destruct;
- (id)initWithDict:(id)arg1;
- (id)init;

@end

