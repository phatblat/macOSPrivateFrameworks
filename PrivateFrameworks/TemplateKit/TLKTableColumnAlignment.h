//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TemplateKit/TLKObject.h>

@interface TLKTableColumnAlignment : TLKObject
{
    BOOL _isEqualWidth;
    unsigned long long _columnAlignment;
    long long _dataAlignment;
}

@property(nonatomic) BOOL isEqualWidth; // @synthesize isEqualWidth=_isEqualWidth;
@property(nonatomic) long long dataAlignment; // @synthesize dataAlignment=_dataAlignment;
@property(nonatomic) unsigned long long columnAlignment; // @synthesize columnAlignment=_columnAlignment;
- (id)description;
- (long long)textAlignment;

@end

