//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MDSNotificationTokenRecord : NSObject
{
    NSString *_aName;
    SEL _aSelector;
    id _anObject;
    int _token;
}

- (int)token;
- (id)object;
- (SEL)selector;
- (id)name;
- (void)dealloc;
- (id)initWithName:(id)arg1 selector:(SEL)arg2 object:(id)arg3 andToken:(int)arg4;

@end
