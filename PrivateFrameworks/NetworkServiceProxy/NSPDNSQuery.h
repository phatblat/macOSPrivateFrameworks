//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NSPDNSQuery : NSObject
{
    NSString *_name;
    long long _recordType;
    long long _recordClass;
}

@property(readonly) long long recordClass; // @synthesize recordClass=_recordClass;
@property(readonly) long long recordType; // @synthesize recordType=_recordType;
@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)copyStateDictionary;
- (id)initWithName:(id)arg1 recordType:(long long)arg2 recordClass:(long long)arg3;

@end

