//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PFID : NSObject
{
    long long _identifier;
}

+ (id)PFID;
+ (void)initialize;
@property long long identifier; // @synthesize identifier=_identifier;
- (long long)currentID;
- (void)setNextID:(long long)arg1;
- (long long)nextID;
- (id)initWithIntegerValue:(long long)arg1;
- (id)init;

@end

