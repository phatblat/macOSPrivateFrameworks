//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol SiriCoreSQLiteColumn <NSObject>
@property(readonly, copy, nonatomic) id <SiriCoreSQLiteValue> defaultValue;
@property(readonly, nonatomic) BOOL isNotNull;
@property(readonly, nonatomic) BOOL isPrimaryKey;
@property(readonly, copy, nonatomic) NSString *type;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, nonatomic) long long identifier;
@end
