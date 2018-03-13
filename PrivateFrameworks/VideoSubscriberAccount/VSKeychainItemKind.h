//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface VSKeychainItemKind : NSObject <NSCopying>
{
    NSString *_itemClassName;
    const struct __CFString *_secItemClass;
    NSArray *_properties;
}

@property(copy, nonatomic) NSArray *properties; // @synthesize properties=_properties;
@property(nonatomic) const struct __CFString *secItemClass; // @synthesize secItemClass=_secItemClass;
@property(copy, nonatomic) NSString *itemClassName; // @synthesize itemClassName=_itemClassName;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSDictionary *attributesByName;
- (void)dealloc;
- (id)init;

@end

