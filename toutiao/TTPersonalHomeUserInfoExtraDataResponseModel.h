//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTResponseModel.h"

@class NSNumber, NSString;

@interface TTPersonalHomeUserInfoExtraDataResponseModel : TTResponseModel
{
    NSNumber *_is_following;
    NSString *_user_id;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(copy, nonatomic) NSString *user_id; // @synthesize user_id=_user_id;
@property(retain, nonatomic) NSNumber *is_following; // @synthesize is_following=_is_following;
- (void).cxx_destruct;

@end

