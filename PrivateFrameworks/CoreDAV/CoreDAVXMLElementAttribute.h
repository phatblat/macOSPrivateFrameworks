//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CoreDAVXMLElementAttribute : NSObject
{
    NSString *_name;
    NSString *_nameSpace;
    NSString *_value;
}

@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *nameSpace; // @synthesize nameSpace=_nameSpace;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (id)initWithNameSpace:(id)arg1 name:(id)arg2 value:(id)arg3;
- (id)init;

@end

