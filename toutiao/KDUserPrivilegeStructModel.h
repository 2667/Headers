//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WDBaseModel.h"

@class NSNumber;

@interface KDUserPrivilegeStructModel : WDBaseModel
{
    NSNumber *_can_delete_answer;
    NSNumber *_can_comment_answer;
    NSNumber *_can_digg_answer;
}

@property(retain, nonatomic) NSNumber *can_digg_answer; // @synthesize can_digg_answer=_can_digg_answer;
@property(retain, nonatomic) NSNumber *can_comment_answer; // @synthesize can_comment_answer=_can_comment_answer;
@property(retain, nonatomic) NSNumber *can_delete_answer; // @synthesize can_delete_answer=_can_delete_answer;
- (void).cxx_destruct;
- (void)reset;
- (id)init;

@end

