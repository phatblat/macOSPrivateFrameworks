//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NUAssertionInfo : NSObject
{
    BOOL _isClassMethod;
    BOOL _isFatal;
    SEL _selector;
    Class _objectClass;
    NSString *_functionName;
    NSString *_fileName;
    unsigned long long _lineNumber;
    NSString *_message;
}

@property BOOL isFatal; // @synthesize isFatal=_isFatal;
@property(retain) NSString *message; // @synthesize message=_message;
@property unsigned long long lineNumber; // @synthesize lineNumber=_lineNumber;
@property(retain) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain) NSString *functionName; // @synthesize functionName=_functionName;
@property BOOL isClassMethod; // @synthesize isClassMethod=_isClassMethod;
@property(retain) Class objectClass; // @synthesize objectClass=_objectClass;
@property SEL selector; // @synthesize selector=_selector;
- (void).cxx_destruct;
- (BOOL)isWarning;
- (id)description;
- (id)prettyMethodName;

@end
