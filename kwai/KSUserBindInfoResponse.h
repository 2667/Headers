//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSUBaseResponse.h"

@class NSString;

@interface KSUserBindInfoResponse : KSUBaseResponse
{
    _Bool _trustDeviceOn;
    NSString *_phone;
    NSString *_email;
}

@property(nonatomic) _Bool trustDeviceOn; // @synthesize trustDeviceOn=_trustDeviceOn;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) NSString *phone; // @synthesize phone=_phone;
- (void).cxx_destruct;

@end

