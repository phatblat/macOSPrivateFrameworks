//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenSharing/SSInputEvent.h>

@interface SSKeyboardEvent : SSInputEvent
{
    unsigned long long mKeyCode;
    int mKeyState;
    void *mReservedForInstanceVariablesKeyboard;
}

+ (id)keyboardEventWithKeyCode:(unsigned long long)arg1 withState:(int)arg2;
@property(readonly) int keyState; // @synthesize keyState=mKeyState;
@property(readonly) unsigned long long keyCode; // @synthesize keyCode=mKeyCode;
- (id)description;
- (id)initWithKeyCode:(unsigned long long)arg1 withState:(int)arg2;

@end

