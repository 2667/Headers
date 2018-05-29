//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KOUserInfo.h"

@class NSDictionary, NSString;

@interface KOUser : KOUserInfo
{
    _Bool _verifiedEmail;
    NSString *_email;
    NSDictionary *_properties;
}

+ (id)responseWithDictionary:(id)arg1;
@property(readonly, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
@property(readonly, nonatomic, getter=isVerifiedEmail) _Bool verifiedEmail; // @synthesize verifiedEmail=_verifiedEmail;
@property(readonly, nonatomic) NSString *email; // @synthesize email=_email;
- (void).cxx_destruct;
- (id)description;
- (id)sendMemoWithTemplateId:(id)arg1 templateArgs:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithDictionary:(id)arg1;
- (id)propertyForKey:(id)arg1;

@end

