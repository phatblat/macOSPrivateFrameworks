//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TextInputCore/TISKTimestampEvent.h>

@class TIKeyboardLayout;

@interface TISKLayoutSwitchEvent : TISKTimestampEvent
{
    TIKeyboardLayout *_layout;
}

@property(retain, nonatomic) TIKeyboardLayout *layout; // @synthesize layout=_layout;
- (void).cxx_destruct;
- (id)description;
- (double)touchUpTimestamp;
- (double)touchDownTimestamp;
- (id)init:(double)arg1 layout:(id)arg2 order:(long long)arg3;

@end

