//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSMTimeEffectItem;

@interface _KSMediaEditMagicFingerConflictState : NSObject
{
    float _speed;
    KSMTimeEffectItem *_timeEffect;
}

@property(retain, nonatomic) KSMTimeEffectItem *timeEffect; // @synthesize timeEffect=_timeEffect;
@property(nonatomic) float speed; // @synthesize speed=_speed;
- (void).cxx_destruct;
- (void)restoreProject:(id)arg1;
- (void)saveProject:(id)arg1;

@end

