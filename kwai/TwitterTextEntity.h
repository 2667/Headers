//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TwitterTextEntity : NSObject
{
    int type;
    struct _NSRange range;
}

+ (id)entityWithType:(int)arg1 range:(struct _NSRange)arg2;
@property(nonatomic) struct _NSRange range; // @synthesize range;
@property(nonatomic) int type; // @synthesize type;
- (id)description;
- (long long)compare:(id)arg1;
- (id)initWithType:(int)arg1 range:(struct _NSRange)arg2;

@end

