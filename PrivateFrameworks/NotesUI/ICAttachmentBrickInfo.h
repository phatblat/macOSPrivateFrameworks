//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ICAttachmentBrickInfo : NSObject
{
    BOOL _titleLight;
    BOOL _detail1Dark;
    NSString *_titleString;
    NSString *_detail1String;
    NSString *_detail2String;
}

@property(nonatomic) BOOL detail1Dark; // @synthesize detail1Dark=_detail1Dark;
@property(nonatomic) BOOL titleLight; // @synthesize titleLight=_titleLight;
@property(copy, nonatomic) NSString *detail2String; // @synthesize detail2String=_detail2String;
@property(copy, nonatomic) NSString *detail1String; // @synthesize detail1String=_detail1String;
@property(copy, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
- (void).cxx_destruct;

@end
