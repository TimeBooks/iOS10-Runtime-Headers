/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIDSLocalMessageTimedOut : PBCodable <NSCopying> {
    long long _expirationDate;
    unsigned long long _timestamp;
    struct { 
        unsigned int expirationDate : 1; 
        unsigned int timestamp : 1; 
    } _has;
}

@property bool hasTimestamp;
@property unsigned long long timestamp;
@property bool hasExpirationDate;
@property long long expirationDate;


- (bool)hasExpirationDate;
- (void)setHasExpirationDate:(bool)arg1;
- (bool)hasTimestamp;
- (void)setHasTimestamp:(bool)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setExpirationDate:(long long)arg1;
- (long long)expirationDate;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end