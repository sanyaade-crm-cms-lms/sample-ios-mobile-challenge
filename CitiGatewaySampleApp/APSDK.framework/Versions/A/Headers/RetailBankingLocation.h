//
//  RetailBankingLocation.h
//  AnyPresence SDK
//

/*!
 @header RetailBankingLocation
 @abstract RetailBankingLocation class
 */

#import "APObject.h"
#import "Typedefs.h"

/*!
 @class RetailBankingLocation
 @abstract Generated model object: RetailBankingLocation.
 @discussion Use @link //apple_ref/occ/cat/RetailBankingLocation(Remote) @/link to add CRUD capabilities.
 The @link //apple_ref/occ/instp/RetailBankingLocation/id @/link field is set as primary key (see @link //apple_ref/occ/cat/APObject(RemoteConfig) @/link) in [self init].
 */
@interface RetailBankingLocation : APObject {
}

/*!
 @method dataSource
 @abstract Returns the data source class associated with a RetailBankingLocation.
 @result Class representing the data source associated with a RetailBankingLocation.
 */
+ (Class)dataSource;

/*!
 @var id
 @abstract Generated model property: id.
 @discussion Primary key. Generated on the server.
 */
@property (nonatomic, strong) NSString * id;

/*!
 @var addressLineOne
 @abstract Generated model property: address_line_one.
 */
@property (nonatomic, strong) NSString * addressLineOne;

/*!
 @var addressLineTwo
 @abstract Generated model property: address_line_two.
 */
@property (nonatomic, strong) NSString * addressLineTwo;

/*!
 @var city
 @abstract Generated model property: city.
 */
@property (nonatomic, strong) NSString * city;

/*!
 @var comments
 @abstract Generated model property: comments.
 */
@property (nonatomic, strong) NSString * comments;

/*!
 @var country
 @abstract Generated model property: country.
 */
@property (nonatomic, strong) NSString * country;

/*!
 @var externalLink
 @abstract Generated model property: external_link.
 */
@property (nonatomic, strong) NSString * externalLink;

/*!
 @var latitude
 @abstract Generated model property: latitude.
 */
@property (nonatomic, strong) NSString * latitude;

/*!
 @var locationType
 @abstract Generated model property: location_type.
 */
@property (nonatomic, strong) NSString * locationType;

/*!
 @var longitude
 @abstract Generated model property: longitude.
 */
@property (nonatomic, strong) NSString * longitude;

/*!
 @var name
 @abstract Generated model property: name.
 */
@property (nonatomic, strong) NSString * name;

/*!
 @var phone
 @abstract Generated model property: phone.
 */
@property (nonatomic, strong) NSString * phone;

/*!
 @var postalCode
 @abstract Generated model property: postal_code.
 */
@property (nonatomic, strong) NSString * postalCode;

/*!
 @var state
 @abstract Generated model property: state.
 */
@property (nonatomic, strong) NSString * state;

@end
