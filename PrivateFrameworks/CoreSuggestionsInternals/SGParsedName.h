//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, NSString, SGIdentityName;

@interface SGParsedName : NSObject
{
    NSString *_name;
    NSSet *_nicknames;
    NSSet *_components;
    SGIdentityName *_identity;
}

+ (id)instanceWithName:(id)arg1;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1;
- (id)components;
- (id)nicknames;

@end

