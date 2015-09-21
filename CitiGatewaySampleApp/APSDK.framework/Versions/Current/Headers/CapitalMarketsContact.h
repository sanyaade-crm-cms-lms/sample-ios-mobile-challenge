//
//  CapitalMarketsContact.h
//  AnyPresence SDK
//

/*!
 @header CapitalMarketsContact
 @abstract CapitalMarketsContact class
 */

#import "APObject.h"
#import "Typedefs.h"

/*!
 @class CapitalMarketsContact
 @abstract Generated model object: CapitalMarketsContact.
 @discussion Use @link //apple_ref/occ/cat/CapitalMarketsContact(Remote) @/link to add CRUD capabilities.
 The @link //apple_ref/occ/instp/CapitalMarketsContact/id @/link field is set as primary key (see @link //apple_ref/occ/cat/APObject(RemoteConfig) @/link) in [self init].
 */
@interface CapitalMarketsContact : APObject {
}

/*!
 @method dataSource
 @abstract Returns the data source class associated with a CapitalMarketsContact.
 @result Class representing the data source associated with a CapitalMarketsContact.
 */
+ (Class)dataSource;

/*!
 @var id
 @abstract Generated model property: id.
 @discussion Primary key. Generated on the server.
 */
@property (nonatomic, strong) NSString * id;

/*!
 @var address
 @abstract Generated model property: address.
 */
@property (nonatomic, strong) NSString * address;

/*!
 @var city
 @abstract Generated model property: city.
 */
@property (nonatomic, strong) NSString * city;

/*!
 @var clientName
 @abstract Generated model property: client_name.
 */
@property (nonatomic, strong) NSString * clientName;

/*!
 @var country
 @abstract Generated model property: country.
 */
@property (nonatomic, strong) NSString * country;

/*!
 @var email
 @abstract Generated model property: email.
 */
@property (nonatomic, strong) NSString * email;

/*!
 @var jobRole
 @abstract Generated model property: job_role.
 */
@property (nonatomic, strong) NSString * jobRole;

/*!
 @var jobTitle
 @abstract Generated model property: job_title.
 */
@property (nonatomic, strong) NSString * jobTitle;

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
 @var state
 @abstract Generated model property: state.
 */
@property (nonatomic, strong) NSString * state;

/*!
 @var year
 @abstract Generated model property: year.
 */
@property (nonatomic, strong) NSNumber * year;

@end
