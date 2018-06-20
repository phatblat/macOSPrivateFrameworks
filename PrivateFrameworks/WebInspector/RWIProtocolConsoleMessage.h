//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString;

@interface RWIProtocolConsoleMessage : RWIProtocolJSONObject
{
}

@property(copy, nonatomic) NSString *networkRequestId;
@property(copy, nonatomic) NSArray *stackTrace;
@property(copy, nonatomic) NSArray *parameters;
@property(nonatomic) int repeatCount;
@property(nonatomic) int column;
@property(nonatomic) int line;
@property(copy, nonatomic) NSString *url;
@property(nonatomic) long long type;
@property(copy, nonatomic) NSString *text;
@property(nonatomic) long long level;
@property(nonatomic) long long source;
- (id)initWithSource:(long long)arg1 level:(long long)arg2 text:(id)arg3;

@end

