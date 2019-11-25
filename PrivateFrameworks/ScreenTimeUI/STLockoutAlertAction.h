//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSString, STLockoutAlertController;

__attribute__((visibility("hidden")))
@interface STLockoutAlertAction : NSObject <NSCopying>
{
    CDUnknownBlockType _handler;
    BOOL _enabled;
    NSString *_title;
    long long _style;
    NSArray *_actions;
    STLockoutAlertController *__alertController;
}

+ (id)actionWithTitle:(id)arg1 style:(long long)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)pinActionWithHandler:(CDUnknownBlockType)arg1;
@property(nonatomic) __weak STLockoutAlertController *_alertController; // @synthesize _alertController=__alertController;
@property(copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)_handleAction:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTitle:(id)arg1 style:(long long)arg2 handler:(CDUnknownBlockType)arg3;

@end

