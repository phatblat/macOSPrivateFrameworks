//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface PEXName : NSObject <NSCopying>
{
    NSString *_first;
    NSString *_middle;
    NSString *_last;
    NSString *_phoneticFirst;
    NSString *_phoneticMiddle;
    NSString *_phoneticLast;
}

+ (id)nameFromNameItem:(id)arg1;
@property(retain, nonatomic) NSString *phoneticLast; // @synthesize phoneticLast=_phoneticLast;
@property(retain, nonatomic) NSString *phoneticMiddle; // @synthesize phoneticMiddle=_phoneticMiddle;
@property(retain, nonatomic) NSString *phoneticFirst; // @synthesize phoneticFirst=_phoneticFirst;
@property(retain, nonatomic) NSString *last; // @synthesize last=_last;
@property(retain, nonatomic) NSString *middle; // @synthesize middle=_middle;
@property(retain, nonatomic) NSString *first; // @synthesize first=_first;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (void)mergeName:(id)arg1;
- (BOOL)isEquivalentToName:(id)arg1;

@end

